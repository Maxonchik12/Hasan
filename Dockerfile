FROM php:8-apache
RUN docker-php-ext-install mysqli pdo pdo_mysql


