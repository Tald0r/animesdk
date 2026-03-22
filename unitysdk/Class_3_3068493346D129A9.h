#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_3068493346D129A9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x63CB710)
#define CLASS_3_3068493346D129A9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x63CBBE0)
#define CLASS_3_3068493346D129A9_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x63CBC40)
#define CLASS_3_3068493346D129A9_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x63CB800)
#define CLASS_3_3068493346D129A9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x63CB570)
#define CLASS_3_3068493346D129A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x63CB770)
#define CLASS_3_3068493346D129A9__CTOR_OFFSET UNITYSDK_OFFSET(0x63CB7F0)

inline static constexpr unsigned int Class_3_3068493346D129A9_TypeDefinitionIndex = 69348;

class Class_3_3068493346D129A9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x92; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_3; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_4; // 0x58
	::System::Int32 Field_3_1; // 0x60
	::System::Boolean Field_3_0; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9_METHOD_3_D109CE569415FA03_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_3068493346D129A9* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3068493346D129A9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3068493346D129A9_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
