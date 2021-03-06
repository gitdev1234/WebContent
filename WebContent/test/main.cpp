#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <float.h>
// ---
#include "WebContent.h"
#include "OpenWeatherMap.h"
#include "DataBuffer.h"
#include "DBInterface.h"


// --- Tests for WebContent

TEST_CASE("readWebContent works") {
    // create and init singleton-DBInterface-object
    DBInterface& dbi = DBInterface::getInstance();
    dbi.init();
    // todo
    dbi.writeStatusOK(true);

    SECTION("readWebContent works for OpenWeatherMap") {
        WebContent WebContent1;
        WebContent1.setWebContentType(new OpenWeatherMap());
        DataBuffer openWeatherMapBuffer = WebContent1.readWebContent();
        REQUIRE(openWeatherMapBuffer.data.size() > 0);
        REQUIRE(openWeatherMapBuffer.data["Lufttemperatur_2m"] > -2000);
        REQUIRE(openWeatherMapBuffer.data["Lufttemperatur_2m"] <  2000);
        REQUIRE(openWeatherMapBuffer.data["Luftdruck_2m"] > -2000);
        REQUIRE(openWeatherMapBuffer.data["Luftdruck_2m"] <  2000);
        REQUIRE(openWeatherMapBuffer.data["RelativeLuftfeuchte_2m"] > -2000);
        REQUIRE(openWeatherMapBuffer.data["RelativeLuftfeuchte_2m"] <  2000);
        REQUIRE(openWeatherMapBuffer.data["Windgeschwindigkeit"] > -2000);
        REQUIRE(openWeatherMapBuffer.data["Windgeschwindigkeit"] <  2000);
        REQUIRE(openWeatherMapBuffer.data["Windrichtung"] > -2000);
        REQUIRE(openWeatherMapBuffer.data["Windrichtung"] <  2000);
        REQUIRE(dbi.readStatusOK());
    }
}
