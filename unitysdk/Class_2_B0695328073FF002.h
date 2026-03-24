#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_37.h"

class Class_1_F89DFA8F8CC59AF0;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_B0695328073FF002_METHOD_2_CD3ED95A81D8BA16_OFFSET UNITYSDK_OFFSET(0xD607EC0)
#define CLASS_2_B0695328073FF002__CTOR_OFFSET UNITYSDK_OFFSET(0xD608F10)

inline static constexpr unsigned int Class_2_B0695328073FF002_TypeDefinitionIndex = 46253;

class Class_2_B0695328073FF002 : public ::Class_1_43BD383C98B4C0C5_37
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0695328073FF002__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CD3ED95A81D8BA16(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>*))((::PBYTE)hIl2Cpp + CLASS_2_B0695328073FF002_METHOD_2_CD3ED95A81D8BA16_OFFSET))(this, a1, a2);
	}
};
