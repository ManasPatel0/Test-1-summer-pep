def create_paginator(items,pageSize):
    pages=[]
    for i in range(0,len(items),pageSize):
        pages.append(items[i:i+pageSize])
    return pages

items=[1, 2, 3, 4, 5, 6]
pageSize=2
pages=create_paginator(items, pageSize)
for page in pages:
    print(page)
