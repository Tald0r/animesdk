#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_2DAF9914BD7306A6_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x81092D0)
#define CLASS_1_2DAF9914BD7306A6_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0x81091E0)
#define CLASS_1_2DAF9914BD7306A6__CTOR_OFFSET UNITYSDK_OFFSET(0x81091D0)

inline static constexpr unsigned int Class_1_2DAF9914BD7306A6_TypeDefinitionIndex = 69059;

class Class_1_2DAF9914BD7306A6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF9914BD7306A6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_2DAF9914BD7306A6* a1)
	{
		return ((::System::Void(*)(::Class_1_2DAF9914BD7306A6*))((::PBYTE)hIl2Cpp + CLASS_1_2DAF9914BD7306A6_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}

	static ::Class_1_2DAF9914BD7306A6* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_2DAF9914BD7306A6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF9914BD7306A6_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
