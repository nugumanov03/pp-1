# sweet = {"id": "0001",
#         "type": "donut",
#         "name": "Cake",
#         "ppu": 0.55,
#         "calories": 125,}

# sweet["name"] = "SuperCake"
# sweet["calories"] = 350
# sweet["have_topping"] = True
# sweet["weight"] = 230

sweet = {"id": "0001",
        "type": "donut",
        "name": "Cake",
        "ppu": 0.55,
        "calories": 125
        }
sweet.pop("ppu")
sweet.pop("type")

print(sweet)