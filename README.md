# CS 301 · Operating Systems (2019)

Course website for CS 301 Operating Systems at IIT Gandhinagar, Semester I 2019–20 (August–November 2019):
<https://nipunbatra.github.io/os2019/>

The site is a [Quarto](https://quarto.org) website in the same design as
[ES 667 Deep Learning](https://nipunbatra.github.io/dl-2026/). GitHub Pages serves this branch as it is, so the
site renders in place: every page's `.html` is committed next to its `.qmd`. After editing a page, run
`quarto render` and commit the result (delete `robots.txt` and `sitemap.xml` first; Quarto regenerates them and otherwise stops with "Source and destination cannot be the same").

| File | Contents |
|---|---|
| `index.qmd` | Home: course facts, course record, module overview, questions, references, teaching assistants |
| `schedule.qmd` | Lectures: every class with its slides |
| `labs.qmd` | Lab sessions and their material |
| `assessment.qmd`, `_dates.qmd` | Grading, dates, quizzes, project and homework |
| `feedback.qmd` | Student feedback |
| `lectures/` | Lecture slides (PDF) and the code used in class (`lectures/code/`) |
| `lectures/index.qmd`, `feedback/index.qmd`, `projects/index.qmd` | Redirects from the old site's addresses |
| `styles.scss`, `course.scss`, `rail.html`, `course-theme.html`, `course-tools.html` | Shared theme |
