#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Class_4_D8E568527D4A9505_Enum_3_101C5536797039E4.h"

class Class_1_8289F2785D9AA990;
namespace System { class Action; }

#define CLASS_4_D8E568527D4A9505_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10B7DE50)
#define CLASS_4_D8E568527D4A9505_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x10B7E0A0)
#define CLASS_4_D8E568527D4A9505_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10B7E040)
#define CLASS_4_D8E568527D4A9505_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10B7DF30)
#define CLASS_4_D8E568527D4A9505__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B7DEB0)
#define CLASS_4_D8E568527D4A9505__CTOR_OFFSET UNITYSDK_OFFSET(0x10B7E030)

inline static constexpr unsigned int Class_4_D8E568527D4A9505_TypeDefinitionIndex = 40501;

class Class_4_D8E568527D4A9505 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x122; // 0x0
	::Class_1_8289F2785D9AA990* Field_4_2; // 0x50
	::System::Action* Field_4_3; // 0x58
	::Class_4_D8E568527D4A9505_Enum_3_101C5536797039E4 Field_4_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_D8E568527D4A9505* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_D8E568527D4A9505*(*)())((::PBYTE)hIl2Cpp + CLASS_4_D8E568527D4A9505_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
