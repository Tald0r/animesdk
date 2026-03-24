#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseLevelPageController_BangBooEntryDataList.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F101001E711B181F_METHOD_1_C12A93CC60801868_OFFSET UNITYSDK_OFFSET(0x92774D0)
#define CLASS_1_F101001E711B181F_METHOD_1_E0EC65F0860F8C42_OFFSET UNITYSDK_OFFSET(0x9276EA0)
#define CLASS_1_F101001E711B181F__CTOR_OFFSET UNITYSDK_OFFSET(0x9276E90)

inline static constexpr unsigned int Class_1_F101001E711B181F_TypeDefinitionIndex = 59808;

class Class_1_F101001E711B181F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList>*))((::PBYTE)hIl2Cpp + CLASS_1_F101001E711B181F__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E0EC65F0860F8C42()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F101001E711B181F_METHOD_1_E0EC65F0860F8C42_OFFSET))(this);
	}

	::System::Int32 Method_1_C12A93CC60801868(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F101001E711B181F_METHOD_1_C12A93CC60801868_OFFSET))(this, a1);
	}
};
