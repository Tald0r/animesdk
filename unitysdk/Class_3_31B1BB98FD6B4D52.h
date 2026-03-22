#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace Ara { class AraTrail; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_31B1BB98FD6B4D52_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x88A2970)
#define CLASS_3_31B1BB98FD6B4D52_METHOD_3_18DED1893B290E16_OFFSET UNITYSDK_OFFSET(0x88A2B40)
#define CLASS_3_31B1BB98FD6B4D52_METHOD_3_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x88A2A60)
#define CLASS_3_31B1BB98FD6B4D52_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x88A2AE0)
#define CLASS_3_31B1BB98FD6B4D52_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x88A2D60)
#define CLASS_3_31B1BB98FD6B4D52_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x88A2D50)
#define CLASS_3_31B1BB98FD6B4D52_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x88A28F0)
#define CLASS_3_31B1BB98FD6B4D52__CCTOR_OFFSET UNITYSDK_OFFSET(0x88A29D0)
#define CLASS_3_31B1BB98FD6B4D52__CTOR_OFFSET UNITYSDK_OFFSET(0x88A2A50)

inline static constexpr unsigned int Class_3_31B1BB98FD6B4D52_TypeDefinitionIndex = 62839;

class Class_3_31B1BB98FD6B4D52 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_9 = 0x3; // 0x0
	::System::String* Field_3_2; // 0x48
	::MoleMole::Battle::Entity* Field_3_0; // 0x50
	::UnityEngine::GameObject* Field_3_4; // 0x58
	::UnityEngine::Transform* Field_3_3; // 0x60
	::MoleMole::Config::ConfigAraTrail* Field_3_1; // 0x68
	::Ara::AraTrail* Field_3_5; // 0x70
	::System::Single Field_3_7; // 0x78
	::System::Boolean Field_3_8; // 0x7C
	::System::Single Field_3_6; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_3923AB821AB9D6A6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_METHOD_3_3923AB821AB9D6A6_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_18DED1893B290E16(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_METHOD_3_18DED1893B290E16_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_31B1BB98FD6B4D52* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_31B1BB98FD6B4D52*(*)())((::PBYTE)hIl2Cpp + CLASS_3_31B1BB98FD6B4D52_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
