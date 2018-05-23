SELECT p.id, p.name
FROM products p, categories c
WHERE c.name LIKE 'super%' AND p.id_categories = c.id
ORDER BY p.id;
