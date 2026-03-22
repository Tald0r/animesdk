#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_28.h"

class Class_1_F89DFA8F8CC59AF0;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_E0A592D0A8EF91B6_METHOD_2_8C16E21E6D195861_OFFSET UNITYSDK_OFFSET(0xD367AB0)
#define CLASS_2_E0A592D0A8EF91B6__CTOR_OFFSET UNITYSDK_OFFSET(0xD368C70)

inline static constexpr unsigned int Class_2_E0A592D0A8EF91B6_TypeDefinitionIndex = 42520;

class Class_2_E0A592D0A8EF91B6 : public ::Class_1_43BD383C98B4C0C5_28
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0A592D0A8EF91B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8C16E21E6D195861(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>*))((::PBYTE)hIl2Cpp + CLASS_2_E0A592D0A8EF91B6_METHOD_2_8C16E21E6D195861_OFFSET))(this, a1, a2);
	}
};
