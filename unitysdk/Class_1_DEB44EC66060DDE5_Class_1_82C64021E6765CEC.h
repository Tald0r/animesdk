#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_739;

#define CLASS_1_DEB44EC66060DDE5_CLASS_1_82C64021E6765CEC_METHOD_1_92152814B14964F3_OFFSET UNITYSDK_OFFSET(0x14629340)
#define CLASS_1_DEB44EC66060DDE5_CLASS_1_82C64021E6765CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x14629330)

inline static constexpr unsigned int Class_1_DEB44EC66060DDE5_Class_1_82C64021E6765CEC_TypeDefinitionIndex = 14987;

class Class_1_DEB44EC66060DDE5_Class_1_82C64021E6765CEC : public ::System::Object
{
public:
	::Share::EAvatarSkillType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEB44EC66060DDE5_CLASS_1_82C64021E6765CEC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_92152814B14964F3(::Class_2_208CC9941471731A_739* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_739*))((::PBYTE)hIl2Cpp + CLASS_1_DEB44EC66060DDE5_CLASS_1_82C64021E6765CEC_METHOD_1_92152814B14964F3_OFFSET))(this, a1);
	}
};
