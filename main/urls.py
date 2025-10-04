from django.urls import path
from . import views

urlpatterns = [
        path('', views.home, name="home"),
        path('about/', views.room, name="about"),
        path('help/', views.help, name="help"),
        # a path to an empty page
        path('notFound/', views.nFound, name="nFound"),
]
