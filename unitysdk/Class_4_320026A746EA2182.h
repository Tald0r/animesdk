#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_320026A746EA2182_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6077B30)
#define CLASS_4_320026A746EA2182_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6077F90)
#define CLASS_4_320026A746EA2182_METHOD_4_27FB16C4EF1F8F78_OFFSET UNITYSDK_OFFSET(0x6077D20)
#define CLASS_4_320026A746EA2182__CTOR_OFFSET UNITYSDK_OFFSET(0x6077E60)

inline static constexpr unsigned int Class_4_320026A746EA2182_TypeDefinitionIndex = 71896;

class Class_4_320026A746EA2182 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::UnityEngine::Vector3>* Field_4_2; // 0x28
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_179456445C225AB4<::System::Single>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_27FB16C4EF1F8F78(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_27FB16C4EF1F8F78_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
