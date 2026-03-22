#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C260E5F602A0806D;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_2EFE66A024B83476_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6C8A880)
#define CLASS_1_2EFE66A024B83476_METHOD_1_3D41C192181397FF_OFFSET UNITYSDK_OFFSET(0x6C8A6A0)
#define CLASS_1_2EFE66A024B83476_METHOD_1_5AD116E99C620EB0_OFFSET UNITYSDK_OFFSET(0x6C89820)
#define CLASS_1_2EFE66A024B83476_METHOD_1_5D47FD3471673B14_OFFSET UNITYSDK_OFFSET(0x6C89EB0)
#define CLASS_1_2EFE66A024B83476_METHOD_1_997CDD1C6806EB32_1_OFFSET UNITYSDK_OFFSET(0x6C8A1F0)
#define CLASS_1_2EFE66A024B83476_METHOD_1_997CDD1C6806EB32_OFFSET UNITYSDK_OFFSET(0x6C89370)
#define CLASS_1_2EFE66A024B83476__CTOR_OFFSET UNITYSDK_OFFSET(0x6C89250)

inline static constexpr unsigned int Class_1_2EFE66A024B83476_TypeDefinitionIndex = 72349;

class Class_1_2EFE66A024B83476 : public ::System::Object
{
public:
	::MoleMole::MonoConfigurableCollider* Field_1_2; // 0x10
	::Class_1_C260E5F602A0806D* Field_1_6; // 0x18
	::Class_1_C260E5F602A0806D* Field_1_5; // 0x20
	::System::Boolean Field_1_0; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::Enum_3_CE3B674D22BBFC73 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_997CDD1C6806EB32(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_997CDD1C6806EB32_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_5D47FD3471673B14(::UnityEngine::Collider* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_5D47FD3471673B14_OFFSET))(this, a1);
	}

	::System::Void Method_1_997CDD1C6806EB32_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_997CDD1C6806EB32_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5AD116E99C620EB0(::UnityEngine::GameObject* a1, ::Enum_3_CE3B674D22BBFC73 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_5AD116E99C620EB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D41C192181397FF(::MoleMole::MonoConfigurableCollider* a1, ::Enum_3_CE3B674D22BBFC73 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoConfigurableCollider*, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_3D41C192181397FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EFE66A024B83476_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}
};
