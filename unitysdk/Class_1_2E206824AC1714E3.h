#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D0978CDFED5807E6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_B7C50519CEC72515;
class Class_2_A944C35C433158AC;
class Class_2_F5A753D004F2488D;
namespace MoleMole { class ConfigUICameraTimelineData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2E206824AC1714E3_METHOD_1_0A17961F2C7839AC_1_OFFSET UNITYSDK_OFFSET(0x777E130)
#define CLASS_1_2E206824AC1714E3_METHOD_1_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0x777DE10)
#define CLASS_1_2E206824AC1714E3_METHOD_1_1EAA8156FE834943_OFFSET UNITYSDK_OFFSET(0x777E3C0)
#define CLASS_1_2E206824AC1714E3_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x777DFB0)
#define CLASS_1_2E206824AC1714E3_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x777E350)
#define CLASS_1_2E206824AC1714E3_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x777E2C0)
#define CLASS_1_2E206824AC1714E3_METHOD_1_B4A742FFAB70D330_OFFSET UNITYSDK_OFFSET(0x777DC50)
#define CLASS_1_2E206824AC1714E3_METHOD_1_DFDD403C1217828F_OFFSET UNITYSDK_OFFSET(0x777E050)
#define CLASS_1_2E206824AC1714E3_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x777DF30)
#define CLASS_1_2E206824AC1714E3__CTOR_OFFSET UNITYSDK_OFFSET(0x777DBE0)

inline static constexpr unsigned int Class_1_2E206824AC1714E3_TypeDefinitionIndex = 56967;

class Class_1_2E206824AC1714E3 : public ::System::Object
{
public:
	::MoleMole::ConfigUICameraTimelineData* Field_1_3; // 0x10
	::Foundation::AssetRequestHandle Field_1_7; // 0x18
	::Class_2_A944C35C433158AC* Field_1_1; // 0x38
	::Class_2_F5A753D004F2488D* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x48
	::Class_2_F5A753D004F2488D* Field_1_4; // 0x50
	::System::Int32 Field_1_2; // 0x58
	::Enum_3_D0978CDFED5807E6 Field_1_6; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B4A742FFAB70D330(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_B4A742FFAB70D330_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A17961F2C7839AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_0A17961F2C7839AC_OFFSET))(this);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_DFDD403C1217828F(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_DFDD403C1217828F_OFFSET))(this, a1);
	}

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_1_0A17961F2C7839AC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_0A17961F2C7839AC_1_OFFSET))(this);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_1EAA8156FE834943(::Class_1_B7C50519CEC72515* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7C50519CEC72515*))((::PBYTE)hIl2Cpp + CLASS_1_2E206824AC1714E3_METHOD_1_1EAA8156FE834943_OFFSET))(this, a1);
	}
};
