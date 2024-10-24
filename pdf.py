############################################
# Edit This Part Only
Data = {
  "Student" : {
    "name" : "Jayathi Rama", 
    "email" : "ce22btech11043@iith.ac.in",
    "Roll_No" : "ce22btech11043",
    "Department": "Civil Engineering",
    "Phone"  : "+918919623742"
  },
  "Club" : {
    "name" : "Milan"
  },
  "Event": {
    "title": "Litsoc Quiz",
    "Purpose": "Quiz",
    "Date": "20th September, 2024",
    "Time": "9AM - 12PM"
  },
  "Room": "CLH or ALH"
}

{
  "Event": {
    "title": "Anime Quiz",
    "Purpose": "Quiz",
    "Date": "20th September, 2024",
    "Time": "9PM - 12AM"
  },
  "Room": "CLH or ALH"
}

{
  "Event": {
    "title": "Graffiti Event",
    "Purpose": "Art",
    "Date": "21st September, 2024",
    "Time": "All Day"
  },
  "Room": "Mess Lawns"
}

{
  "Event": {
    "title": "Stage Play",
    "Purpose": "Theater",
    "Date": "21st September, 2024",
    "Time": "9AM - 12PM"
  },
  "Room": "Auditorium"
}

{
  "Event": {
    "title": "RDM Stand-up",
    "Purpose": "Comedy",
    "Date": "22nd September, 2024",
    "Time": "10:30AM - 12:30PM"
  },
  "Room": "Auditorium"
}

{
  "Event": {
    "title": "Clay Modeling",
    "Purpose": "Art",
    "Date": "22nd September, 2024",
    "Time": "2:30PM - 5:30PM"
  },
  "Room": "Classroom"
}

{
  "Event": {
    "title": "Solo Dance",
    "Purpose": "Dance Performance",
    "Date": "22nd September, 2024",
    "Time": "9PM - 12AM"
  },
  "Room": "LHC"
}

############################################



from PyPDF2 import PdfWriter, PdfReader
import io
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import letter

# RB.pdf
packet1 = io.BytesIO()
can = canvas.Canvas(packet1, pagesize=letter)
can.drawString(450, 604, Data["Event"]["Date"])
can.drawString(240, 580, Data["Student"]["name"])
can.drawString(240, 548, Data["Student"]["Roll_No"])
can.drawString(240, 516, Data["Student"]["Department"])
can.drawString(240, 484, Data["Room"])
can.drawString(240, 452, Data["Event"]["Date"])
can.drawString(240, 432, Data["Event"]["Time"])
can.drawString(85, 380, Data["Event"]["Purpose"])
can.save()

packet1.seek(0)
new_pdf = PdfReader(packet1)
existing_pdf = PdfReader(open("rb.pdf", "rb"))
output = PdfWriter()
page = existing_pdf.pages[0]
page.merge_page(new_pdf.pages[0])
output.add_page(page)
output_stream = open("submit_rb.pdf", "wb")
output.write(output_stream)
output_stream.close()

# GYMKHANA.pdf
packet2 = io.BytesIO()
can = canvas.Canvas(packet2, pagesize=letter)
can.drawString(450, 665, Data["Event"]["Date"])
can.drawString(370, 625, Data["Club"]["name"])
can.drawString(270, 560, Data["Event"]["title"])
can.drawString(80, 180, f"Date : {Data['Event']['Date']}")
can.drawString(80, 160, f"Time : {Data['Event']['Time']}")
can.save()
packet2.seek(0)

packet3 = io.BytesIO()
can = canvas.Canvas(packet3, pagesize=letter)
can.drawString(85, 704, f"{Data['Student']['name']} \t {Data['Student']['Phone']} \t {Data['Student']['email']}")
can.drawString(120, 215, f"{Data['Room']}")
can.save()
packet3.seek(0)

new_pdf_1 = PdfReader(packet2)
new_pdf_2 = PdfReader(packet3)
existing_pdf = PdfReader(open("gymkhana.pdf", "rb"))
output = PdfWriter()
page = existing_pdf.pages[0]
page.merge_page(new_pdf_1.pages[0])
output.add_page(page)
page = existing_pdf.pages[1]
page.merge_page(new_pdf_2.pages[0])
output.add_page(page)
output_stream = open("submit_gymkhana.pdf", "wb")
output.write(output_stream)
output_stream.close()