FROM jupyter/scipy-notebook

USER root

COPY prepare.sh /prepare.sh
RUN /prepare.sh

USER $NB_USER
