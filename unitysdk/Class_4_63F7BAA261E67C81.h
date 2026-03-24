#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_63F7BAA261E67C81_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1A4BA3A0)
#define CLASS_4_63F7BAA261E67C81_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1A4B97B0)
#define CLASS_4_63F7BAA261E67C81_METHOD_4_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x1A4B9C30)
#define CLASS_4_63F7BAA261E67C81__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BA150)

inline static constexpr unsigned int Class_4_63F7BAA261E67C81_TypeDefinitionIndex = 44557;

class Class_4_63F7BAA261E67C81 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_4_1; // 0x38
	::Class_4_179456445C225AB4<::System::Single>* Field_4_4; // 0x40
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_4_7; // 0x48
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_4_3; // 0x50
	::Class_4_179456445C225AB4<::System::Single>* Field_4_6; // 0x58
	::Class_4_179456445C225AB4<::System::Single>* Field_4_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_63F7BAA261E67C81__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_63F7BAA261E67C81_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_CC4DC8FB65DC8FF4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_63F7BAA261E67C81_METHOD_4_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_63F7BAA261E67C81_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
