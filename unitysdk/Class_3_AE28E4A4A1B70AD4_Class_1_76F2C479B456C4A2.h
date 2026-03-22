#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_AE28E4A4A1B70AD4_CLASS_1_76F2C479B456C4A2_METHOD_1_99876CA34FD8DCAC_OFFSET UNITYSDK_OFFSET(0x663BFD0)
#define CLASS_3_AE28E4A4A1B70AD4_CLASS_1_76F2C479B456C4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x663BFC0)

inline static constexpr unsigned int Class_3_AE28E4A4A1B70AD4_Class_1_76F2C479B456C4A2_TypeDefinitionIndex = 79148;

class Class_3_AE28E4A4A1B70AD4_Class_1_76F2C479B456C4A2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE28E4A4A1B70AD4_CLASS_1_76F2C479B456C4A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99876CA34FD8DCAC(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_AE28E4A4A1B70AD4_CLASS_1_76F2C479B456C4A2_METHOD_1_99876CA34FD8DCAC_OFFSET))(this, a1);
	}
};
