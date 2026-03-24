#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x64A8F00)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_7A0D5FDBC5C9186C_OFFSET UNITYSDK_OFFSET(0x64A8AB0)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x64A8FB0)
#define CLASS_1_AE8977CC8DFA35ED_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x64A9080)
#define CLASS_1_AE8977CC8DFA35ED__CTOR_OFFSET UNITYSDK_OFFSET(0x64A8AA0)

inline static constexpr unsigned int Class_1_AE8977CC8DFA35ED_TypeDefinitionIndex = 57794;

class Class_1_AE8977CC8DFA35ED : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A0D5FDBC5C9186C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_7A0D5FDBC5C9186C_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE8977CC8DFA35ED_METHOD_1_6D5F59BCE8B4A09A_OFFSET))(this);
	}
};
