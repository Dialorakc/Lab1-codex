from django.shortcuts import render
from django.http import HttpResponse

def home(request):

    items = [
        'widget 1',
        'widget 2',
        'widget 3',
    ]

    context = {
        'items': items
    }

    return render(request, 'home.html', context)

def room(request):
    return render(request, 'about.html')

def help(request):
    return render(request, 'help.html')

def nFound(request):
    return render(request, 'empty.html')
