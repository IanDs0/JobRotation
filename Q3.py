""" pip install pandas """

import pandas as pd
import numpy as np


XML = pd.read_xml("./planilha.xml")

vetor = [] 

for i, row in XML.iterrows():
    vetor = row.XML.tolist()


maior = vetor[0]
menor = vetor[0]
dias_superiores_media = 0
media = 0

for i in range(len(vetor)):

    media += vetor[i]

    if(vetor[i]>maior):
        maior=vetor[i]
    if(vetor[i]<menor):
        menor=vetor[i]

media /= len(vetor)

for i in range(len(vetor)):

    if(vetor[i]>media):
        dias_superiores_media+=1;

print("\n O menor valor de faturamento ocorrido em um dia do mês: "+ str(menor))
print("\n O maior valor de faturamento ocorrido em um dia do mês: " + str(maior))
print("\n Número de dias no mês em que o valor de faturamento diário foi superior à média mensal: " + str(dias_superiores_media))
