#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

class Class_1_8289F2785D9AA990;
class Class_3_F61947B841A40F75;
namespace MoleMole::Config { class ConfigLockTarget; }
namespace System { class String; }

#define CLASS_2_08285FCC474752C1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x9A86A50)
#define CLASS_2_08285FCC474752C1_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x9A867D0)
#define CLASS_2_08285FCC474752C1_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x9A86B50)
#define CLASS_2_08285FCC474752C1_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x9A86C70)
#define CLASS_2_08285FCC474752C1_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x9A86B40)
#define CLASS_2_08285FCC474752C1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A868F0)
#define CLASS_2_08285FCC474752C1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A86A00)

inline static constexpr unsigned int Class_2_08285FCC474752C1_TypeDefinitionIndex = 38559;

class Class_2_08285FCC474752C1 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::MoleMole::Config::ConfigLockTarget* Field_2_1; // 0x80
	::Class_1_8289F2785D9AA990* Field_2_4; // 0x88
	::MoleMole::Config::ConfigLockTarget* Field_2_2; // 0x90
	::Class_3_F61947B841A40F75* Field_2_3; // 0x98
	::System::Int32 Field_2_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};
