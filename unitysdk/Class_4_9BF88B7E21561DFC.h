#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_9BF88B7E21561DFC_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6596410)
#define CLASS_4_9BF88B7E21561DFC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6596A40)
#define CLASS_4_9BF88B7E21561DFC_METHOD_4_E6101D93928B4095_OFFSET UNITYSDK_OFFSET(0x6596600)
#define CLASS_4_9BF88B7E21561DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x6596910)

inline static constexpr unsigned int Class_4_9BF88B7E21561DFC_TypeDefinitionIndex = 51341;

class Class_4_9BF88B7E21561DFC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_1; // 0x30
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_E6101D93928B4095(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_E6101D93928B4095_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
