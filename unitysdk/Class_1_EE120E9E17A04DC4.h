#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EE120E9E17A04DC4_METHOD_1_BA8431713F5462BF_OFFSET UNITYSDK_OFFSET(0x62170C0)
#define CLASS_1_EE120E9E17A04DC4_METHOD_1_D7ED3C4DCE00EE5C_OFFSET UNITYSDK_OFFSET(0x6217550)
#define CLASS_1_EE120E9E17A04DC4_METHOD_1_E0779C33EECC5FC6_OFFSET UNITYSDK_OFFSET(0x6217B90)
#define CLASS_1_EE120E9E17A04DC4_METHOD_1_EF92A918BB3FECC4_OFFSET UNITYSDK_OFFSET(0x6217690)
#define CLASS_1_EE120E9E17A04DC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x62170B0)

inline static constexpr unsigned int Class_1_EE120E9E17A04DC4_TypeDefinitionIndex = 42126;

class Class_1_EE120E9E17A04DC4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE120E9E17A04DC4_TypeDefinitionIndex)->GetStaticField(0x41020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE120E9E17A04DC4__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_BA8431713F5462BF(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EE120E9E17A04DC4_METHOD_1_BA8431713F5462BF_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_D7ED3C4DCE00EE5C(::UnityEngine::RaycastHit a1)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_EE120E9E17A04DC4_METHOD_1_D7ED3C4DCE00EE5C_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0779C33EECC5FC6(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE120E9E17A04DC4_METHOD_1_E0779C33EECC5FC6_OFFSET))(a1);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_EF92A918BB3FECC4(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EE120E9E17A04DC4_METHOD_1_EF92A918BB3FECC4_OFFSET))(a1, a2);
	}
};
