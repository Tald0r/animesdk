#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x9047B40)
#define CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9047F50)
#define CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x90478D0)
#define CLASS_4_E959B2881C40422A__CTOR_OFFSET UNITYSDK_OFFSET(0x9047DF0)

inline static constexpr unsigned int Class_4_E959B2881C40422A_TypeDefinitionIndex = 45472;

class Class_4_E959B2881C40422A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_4_3; // 0x28
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_4_1; // 0x30
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_4_2; // 0x38
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_22EB5E1405A8445C(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E959B2881C40422A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
