{{/* vim: set filetype=mustache: */}}
{{/*
Expand the anme of the chart.
*/}}
{{- define "mysql.name" -}}
mysql
{{- end -}}
{{/*
Create name and version as used by the chart lable.
*/}}

{{- define "mysql.chart" -}}
{{- printf "%s" .Chart.Name .Chart.Version | replace "+" "_" -}}
{{- end -}}

{{/*
Create a default fully qualified mysql name.
We truncate at 63 chars because some kubernaes name fields are limited to this (by the DNS name spac.)
*/}}
{{- define "mysql.fullname" -}}
{{- printf "%s" .Release.Name  -}}
{{- end -}}

{{/*
Common labels for mysql
*/}}
{{- define "mysql.labels" -}}
app.kubernetes.io/name: {{ include "mysql.name" . }}
{{- end -}}
{{/*
Selector labels for mysql
*/}}
{{- define "mysql.selectorLabels" -}}
app.kubernetes.io/name: {{ include "mysql.name" . }}
{{- end -}}
