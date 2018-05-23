SELECT pd.name, p.name
FROM providers p, products pd
WHERE p.id = pd.id_providers AND pd.id_categories = 6;
