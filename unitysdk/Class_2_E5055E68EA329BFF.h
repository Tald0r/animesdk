#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_28.h"

class Class_1_F89DFA8F8CC59AF0;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_E5055E68EA329BFF_METHOD_2_220E4CD41B5DBF1C_OFFSET UNITYSDK_OFFSET(0x6BF3790)
#define CLASS_2_E5055E68EA329BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x6BF3E40)

inline static constexpr unsigned int Class_2_E5055E68EA329BFF_TypeDefinitionIndex = 72495;

class Class_2_E5055E68EA329BFF : public ::Class_1_43BD383C98B4C0C5_28
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5055E68EA329BFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_220E4CD41B5DBF1C(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>*))((::PBYTE)hIl2Cpp + CLASS_2_E5055E68EA329BFF_METHOD_2_220E4CD41B5DBF1C_OFFSET))(this, a1, a2);
	}
};
