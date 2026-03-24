#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

class Class_1_8289F2785D9AA990;
class Class_3_B19369CC4AB45FA4;
class Class_3_F61947B841A40F75;
namespace MoleMole::Config { class ConfigLockTarget; }

#define CLASS_2_94926EAAB28267F5_METHOD_2_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0xCBA7470)
#define CLASS_2_94926EAAB28267F5_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xCBA7310)
#define CLASS_2_94926EAAB28267F5_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xCBA7560)
#define CLASS_2_94926EAAB28267F5_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xCBA7680)
#define CLASS_2_94926EAAB28267F5__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA7430)

inline static constexpr unsigned int Class_2_94926EAAB28267F5_TypeDefinitionIndex = 61713;

class Class_2_94926EAAB28267F5 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::Class_3_F61947B841A40F75* Field_2_1; // 0x80
	::MoleMole::Config::ConfigLockTarget* Field_2_0; // 0x88
	::Class_3_B19369CC4AB45FA4* Field_2_2; // 0x90
	::Class_1_8289F2785D9AA990* Field_2_4; // 0x98
	::System::Int32 Field_2_3; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};
