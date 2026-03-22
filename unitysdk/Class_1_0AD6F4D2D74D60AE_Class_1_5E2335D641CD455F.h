#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }

#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_5E2335D641CD455F_METHOD_1_03F91E05252661CD_OFFSET UNITYSDK_OFFSET(0x9C1F130)
#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_5E2335D641CD455F__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1F120)

inline static constexpr unsigned int Class_1_0AD6F4D2D74D60AE_Class_1_5E2335D641CD455F_TypeDefinitionIndex = 63045;

class Class_1_0AD6F4D2D74D60AE_Class_1_5E2335D641CD455F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_5E2335D641CD455F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03F91E05252661CD(::MoleMole::Config::ConfigTeamInspireZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamInspireZone*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_5E2335D641CD455F_METHOD_1_03F91E05252661CD_OFFSET))(this, a1);
	}
};
