#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0FDEDE4081A2BC36.h"

namespace MoleMole::Config { class CharacterConfigPhotoCamera; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }

#define CLASS_3_DCB7F8B839F0C44B_6_METHOD_3_8B5FA010F21149C4_OFFSET UNITYSDK_OFFSET(0x905D410)
#define CLASS_3_DCB7F8B839F0C44B_6_METHOD_3_DF93EDDB1653EE91_OFFSET UNITYSDK_OFFSET(0x905D540)
#define CLASS_3_DCB7F8B839F0C44B_6__CTOR_OFFSET UNITYSDK_OFFSET(0x905D400)

inline static constexpr unsigned int Class_3_DCB7F8B839F0C44B_6_TypeDefinitionIndex = 51848;

class Class_3_DCB7F8B839F0C44B_6 : public ::Class_2_0FDEDE4081A2BC36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_6__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::UIConfigPhotoCamera* Method_3_8B5FA010F21149C4()
	{
		return ((::MoleMole::Config::UIConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_6_METHOD_3_8B5FA010F21149C4_OFFSET))(this);
	}

	::MoleMole::Config::CharacterConfigPhotoCamera* Method_3_DF93EDDB1653EE91()
	{
		return ((::MoleMole::Config::CharacterConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_6_METHOD_3_DF93EDDB1653EE91_OFFSET))(this);
	}
};
