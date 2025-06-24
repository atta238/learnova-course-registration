
import smtplib
import sys
from email.message import EmailMessage

# Email of the user to warn
email = sys.argv[1]
last_six = sys.argv[2]

# Create email message
msg = EmailMessage()

msg.set_content(f"Your verification code is: {last_six}")  # fallback

msg.add_alternative(f"""
<html>
  <body style="font-family: Arial, sans-serif; background-color: #f4f4f4; padding: 30px;">
    <div style="max-width: 500px; margin: auto; background-color: white; padding: 20px; border-radius: 10px; box-shadow: 0px 0px 10px rgba(0,0,0,0.1);">
      <h2 style="color: #2c3e50; text-align: center;">🔐 Verification Code</h2>
      <p style="font-size: 16px; color: #333;">Hello,</p>
      <p style="font-size: 16px; color: #333;">Your verification code is:</p>
      <p style="font-size: 32px; font-weight: bold; color: #e74c3c; text-align: center;">{last_six}</p>
      <p style="font-size: 14px; color: #777;">Please enter this code to verify your login. If you did not request this, you can ignore the email.</p>
    </div>
  </body>
</html>
""", subtype='html')

msg["Subject"] = "Verification Code"
msg["From"] = "amrhany010964@gmail.com"
msg["To"] = email

# Send email using Gmail SMTP with App Password
try:
    server = smtplib.SMTP_SSL("smtp.gmail.com", 465)
    server.login("amrhany010964@gmail.com", "ocdzuehbgfrpndjf")  # App Password بدون مسافات
    server.send_message(msg)
    server.quit()
    print("Enter the code that was sent to your email: ")
except smtplib.SMTPAuthenticationError as e:
    print("Authentication failed:", e)
except Exception as e:
    print("Error sending email:", e)
