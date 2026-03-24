#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_4.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_72;
namespace System { class String; }

#define CLASS_1_5EDBDCB8D0607CC1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x8DA8820)
#define CLASS_1_5EDBDCB8D0607CC1_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x8DA8850)
#define CLASS_1_5EDBDCB8D0607CC1_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x8DA8860)
#define CLASS_1_5EDBDCB8D0607CC1_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x8DA85B0)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_8177900CB086B871_OFFSET UNITYSDK_OFFSET(0x8DA8870)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_B9489D332A757B66_OFFSET UNITYSDK_OFFSET(0x8DA8800)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_C39EFEF48B9CC812_OFFSET UNITYSDK_OFFSET(0x8DA8910)
#define CLASS_1_5EDBDCB8D0607CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA8900)

inline static constexpr unsigned int Class_1_5EDBDCB8D0607CC1_TypeDefinitionIndex = 77160;

class Class_1_5EDBDCB8D0607CC1 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_72* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1__CTOR_OFFSET))(this);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_TITLE_OFFSET))(this);
	}

	::Foundation::AssetPath get_IconPath()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_ICONPATH_OFFSET))(this);
	}

	::Enum_3_504F298B4B2B1EEF get_IconType()
	{
		return ((::Enum_3_504F298B4B2B1EEF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_ICONTYPE_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_REDDOTINFO_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> Method_1_8177900CB086B871()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_8177900CB086B871_OFFSET))(this);
	}

	::Share::ENotificationBadgeType Method_1_C39EFEF48B9CC812()
	{
		return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_C39EFEF48B9CC812_OFFSET))(this);
	}

	::Enum_3_5EA2B17DF83E32C8_4 Method_1_B9489D332A757B66()
	{
		return ((::Enum_3_5EA2B17DF83E32C8_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_B9489D332A757B66_OFFSET))(this);
	}
};
