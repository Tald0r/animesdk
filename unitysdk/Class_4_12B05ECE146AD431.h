#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_12B05ECE146AD431_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBA9CC20)
#define CLASS_4_12B05ECE146AD431_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xBA9D280)
#define CLASS_4_12B05ECE146AD431_METHOD_4_DEABC489FFA72692_OFFSET UNITYSDK_OFFSET(0xBA9CE10)
#define CLASS_4_12B05ECE146AD431__CTOR_OFFSET UNITYSDK_OFFSET(0xBA9D150)

inline static constexpr unsigned int Class_4_12B05ECE146AD431_TypeDefinitionIndex = 61573;

class Class_4_12B05ECE146AD431 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x30
	::Class_4_AF61EEC11F34483C<::UnityEngine::Vector3>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_DEABC489FFA72692(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_DEABC489FFA72692_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_12B05ECE146AD431_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
