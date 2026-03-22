#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_CFB7A3C91FBAC44A;
class Class_2_C3D82D0D1B9FA8D4;
class Class_3_E29E10A308ABE38D;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_1EF968414CAAECE3_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6F6E250)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_0510679EA0BDFE40_OFFSET UNITYSDK_OFFSET(0x6F71E90)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_379C3887200641DA_OFFSET UNITYSDK_OFFSET(0x6F71C20)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_3E93FA6F20F95942_OFFSET UNITYSDK_OFFSET(0x6F71800)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_3EEC78C50FD8C296_OFFSET UNITYSDK_OFFSET(0x6F72020)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_46D2500EF3996023_OFFSET UNITYSDK_OFFSET(0x6F705F0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_4943333D131692A3_OFFSET UNITYSDK_OFFSET(0x6F70A90)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_51E0B3B7F3B2F2FE_OFFSET UNITYSDK_OFFSET(0x6F6FB70)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_61210B24A3553DC5_OFFSET UNITYSDK_OFFSET(0x6F6FF10)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_8767DC4E6B381BBD_OFFSET UNITYSDK_OFFSET(0x6F71720)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_9193255C44DE1FEC_OFFSET UNITYSDK_OFFSET(0x6F71AF0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6F71BB0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_BC710BFD9E4F5D17_OFFSET UNITYSDK_OFFSET(0x6F71F40)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F71FC0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_CDAB4E4E69D7A9F5_OFFSET UNITYSDK_OFFSET(0x6F6F460)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_EC80FBF6A2A42FC7_OFFSET UNITYSDK_OFFSET(0x6F70D40)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_EE0CFF7F6F24BA6C_OFFSET UNITYSDK_OFFSET(0x6F6E8D0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_F4A03BD84B5BAF0A_OFFSET UNITYSDK_OFFSET(0x6F6EAF0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_FAA8220B75BAD096_OFFSET UNITYSDK_OFFSET(0x6F6ED40)
#define CLASS_3_1EF968414CAAECE3_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x6F6E730)
#define CLASS_3_1EF968414CAAECE3__CTOR_OFFSET UNITYSDK_OFFSET(0x6F6E8B0)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3_TypeDefinitionIndex = 66441;

class Class_3_1EF968414CAAECE3 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_EE0CFF7F6F24BA6C(::Class_3_E29E10A308ABE38D* a1)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_EE0CFF7F6F24BA6C_OFFSET))(a1);
	}

	static ::System::Void Method_3_FAA8220B75BAD096(::System::String* a1, ::UnityEngine::GameObject* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_FAA8220B75BAD096_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_CDAB4E4E69D7A9F5(::Class_3_E29E10A308ABE38D* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Single a7, ::System::Single a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_CDAB4E4E69D7A9F5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_4943333D131692A3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_4943333D131692A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_61210B24A3553DC5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_61210B24A3553DC5_OFFSET))(a1);
	}

	static ::System::Void Method_3_8767DC4E6B381BBD(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_8767DC4E6B381BBD_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCharacterAttachment* Method_3_9193255C44DE1FEC(::System::Int32 a1)
	{
		return ((::MoleMole::Config::ConfigCharacterAttachment*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_9193255C44DE1FEC_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_51E0B3B7F3B2F2FE(::Class_3_E29E10A308ABE38D* a1, ::Class_1_CFB7A3C91FBAC44A* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*, ::Class_1_CFB7A3C91FBAC44A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_51E0B3B7F3B2F2FE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_379C3887200641DA(::Class_3_E29E10A308ABE38D* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_379C3887200641DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F4A03BD84B5BAF0A(::Class_3_E29E10A308ABE38D* a1, ::Class_1_CFB7A3C91FBAC44A* a2)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*, ::Class_1_CFB7A3C91FBAC44A*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_F4A03BD84B5BAF0A_OFFSET))(a1, a2);
	}

	static ::Class_1_CFB7A3C91FBAC44A* Method_3_46D2500EF3996023(::Class_3_E29E10A308ABE38D* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::Class_1_CFB7A3C91FBAC44A*(*)(::Class_3_E29E10A308ABE38D*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_46D2500EF3996023_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0510679EA0BDFE40(::Class_3_E29E10A308ABE38D* a1, ::System::String* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_0510679EA0BDFE40_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_BC710BFD9E4F5D17(::Class_3_E29E10A308ABE38D* a1)
	{
		return ((::System::Void(*)(::Class_3_E29E10A308ABE38D*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_BC710BFD9E4F5D17_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_EC80FBF6A2A42FC7(::MoleMole::CharacterScriptConfig* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::CharacterScriptConfig*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_EC80FBF6A2A42FC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3E93FA6F20F95942(::MoleMole::Battle::Entity* a1, ::Class_2_C3D82D0D1B9FA8D4* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_C3D82D0D1B9FA8D4*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_3E93FA6F20F95942_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3EEC78C50FD8C296(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_3EEC78C50FD8C296_OFFSET))(a1);
	}
};
