class analysedText(object):
    
    def __init__ (self, Text):
        
        formText = Text.lower()
        self.fmText = formText
    def constructor(self):
        fmText = Text.lower()
        """fmText.replace("!","")
        fmText.replace(".","")
        fmText.replace(",","")
        fmText.replace("?","")"""
        
    def freqAll(self):
        self.fmText.split(" ")
         
text = "My name is. Ankit, rana."
fmText1 = analysedText(text)
print(fmText1.Text)
