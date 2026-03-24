#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_37.h"

class Class_1_F89DFA8F8CC59AF0;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_67869D8FDB4E65DE_METHOD_2_8A7245A28C6D3076_OFFSET UNITYSDK_OFFSET(0x636E9A0)
#define CLASS_2_67869D8FDB4E65DE__CTOR_OFFSET UNITYSDK_OFFSET(0x636F1E0)

inline static constexpr unsigned int Class_2_67869D8FDB4E65DE_TypeDefinitionIndex = 71673;

class Class_2_67869D8FDB4E65DE : public ::Class_1_43BD383C98B4C0C5_37
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67869D8FDB4E65DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8A7245A28C6D3076(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>*))((::PBYTE)hIl2Cpp + CLASS_2_67869D8FDB4E65DE_METHOD_2_8A7245A28C6D3076_OFFSET))(this, a1, a2);
	}
};
