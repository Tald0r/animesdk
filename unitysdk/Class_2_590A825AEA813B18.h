#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_88D140F5E09465E1_14;
class Class_3_9F2FCC0519F3E06F_33;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_590A825AEA813B18_METHOD_2_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0xB44E850)
#define CLASS_2_590A825AEA813B18_METHOD_2_53718CE23ECAD805_1_OFFSET UNITYSDK_OFFSET(0xB44EBE0)
#define CLASS_2_590A825AEA813B18_METHOD_2_53718CE23ECAD805_OFFSET UNITYSDK_OFFSET(0xB44E6B0)
#define CLASS_2_590A825AEA813B18_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xB44ED80)
#define CLASS_2_590A825AEA813B18_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB44E530)
#define CLASS_2_590A825AEA813B18_METHOD_2_DDC64FAB67FB7C54_OFFSET UNITYSDK_OFFSET(0xB44EF00)
#define CLASS_2_590A825AEA813B18_ONSTART_OFFSET UNITYSDK_OFFSET(0xB44E4D0)
#define CLASS_2_590A825AEA813B18__CTOR_OFFSET UNITYSDK_OFFSET(0xB44E630)

inline static constexpr unsigned int Class_2_590A825AEA813B18_TypeDefinitionIndex = 64450;

class Class_2_590A825AEA813B18 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_53718CE23ECAD805(::Class_3_9F2FCC0519F3E06F_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_33*))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_53718CE23ECAD805_OFFSET))(this, a1);
	}

	::System::Void Method_2_53718CE23ECAD805_1(::Class_3_88D140F5E09465E1_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_88D140F5E09465E1_14*))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_53718CE23ECAD805_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDC64FAB67FB7C54(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_590A825AEA813B18_METHOD_2_DDC64FAB67FB7C54_OFFSET))(this, a1, a2, a3, a4);
	}
};
