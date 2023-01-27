#ifndef EQEMU_AA_RANKS_REPOSITORY_H
#define EQEMU_AA_RANKS_REPOSITORY_H

#include "../database.h"
#include "../strings.h"
#include "base/base_aa_ranks_repository.h"

class AaRanksRepository: public BaseAaRanksRepository {
public:

    /**
     * This file was auto generated and can be modified and extended upon
     *
     * Base repository methods are automatically
     * generated in the "base" version of this repository. The base repository
     * is immutable and to be left untouched, while methods in this class
     * are used as extension methods for more specific persistence-layer
     * accessors or mutators.
     *
     * Base Methods (Subject to be expanded upon in time)
     *
     * Note: Not all tables are designed appropriately to fit functionality with all base methods
     *
     * InsertOne
     * UpdateOne
     * DeleteOne
     * FindOne
     * GetWhere(std::string where_filter)
     * DeleteWhere(std::string where_filter)
     * InsertMany
     * All
     *
     * Example custom methods in a repository
     *
     * AaRanksRepository::GetByZoneAndVersion(int zone_id, int zone_version)
     * AaRanksRepository::GetWhereNeverExpires()
     * AaRanksRepository::GetWhereXAndY()
     * AaRanksRepository::DeleteWhereXAndY()
     *
     * Most of the above could be covered by base methods, but if you as a developer
     * find yourself re-using logic for other parts of the code, its best to just make a
     * method that can be re-used easily elsewhere especially if it can use a base repository
     * method and encapsulate filters there
     */

	// Custom extended repository methods here

};

#endif //EQEMU_AA_RANKS_REPOSITORY_H
