#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_B078ADE15E921143;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_F090629385CAF8D7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD74BC30)
#define CLASS_3_F090629385CAF8D7_METHOD_3_372D94B0F906ED6C_OFFSET UNITYSDK_OFFSET(0xD74D250)
#define CLASS_3_F090629385CAF8D7_METHOD_3_3D98DB7DD083F480_OFFSET UNITYSDK_OFFSET(0xD74C510)
#define CLASS_3_F090629385CAF8D7_METHOD_3_407623946ED4FC77_OFFSET UNITYSDK_OFFSET(0xD74C130)
#define CLASS_3_F090629385CAF8D7_METHOD_3_6149DBD2316B59ED_OFFSET UNITYSDK_OFFSET(0xD74C9C0)
#define CLASS_3_F090629385CAF8D7_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0xD74CC90)
#define CLASS_3_F090629385CAF8D7_METHOD_3_81F8737F2580BA08_OFFSET UNITYSDK_OFFSET(0xD74CFF0)
#define CLASS_3_F090629385CAF8D7_METHOD_3_A16B1E4DB1A3F093_OFFSET UNITYSDK_OFFSET(0xD74D670)
#define CLASS_3_F090629385CAF8D7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD74D1E0)
#define CLASS_3_F090629385CAF8D7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD74C0D0)
#define CLASS_3_F090629385CAF8D7_METHOD_3_D87DF017AE5D71CE_OFFSET UNITYSDK_OFFSET(0xD74C5A0)
#define CLASS_3_F090629385CAF8D7_UPDATE_OFFSET UNITYSDK_OFFSET(0xD74BF30)
#define CLASS_3_F090629385CAF8D7__CTOR_OFFSET UNITYSDK_OFFSET(0xD74C0B0)

inline static constexpr unsigned int Class_3_F090629385CAF8D7_TypeDefinitionIndex = 68566;

class Class_3_F090629385CAF8D7 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_407623946ED4FC77(::Class_3_B078ADE15E921143* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::Class_3_B078ADE15E921143*, ::System::UInt32, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_407623946ED4FC77_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_6149DBD2316B59ED(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_6149DBD2316B59ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_81F8737F2580BA08(::Class_3_B078ADE15E921143* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_B078ADE15E921143*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_81F8737F2580BA08_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_3D98DB7DD083F480(::Class_3_B078ADE15E921143* a1)
	{
		return ((::System::Boolean(*)(::Class_3_B078ADE15E921143*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_3D98DB7DD083F480_OFFSET))(a1);
	}

	static ::System::Void Method_3_D87DF017AE5D71CE(::Class_3_B078ADE15E921143* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_B078ADE15E921143*, ::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_D87DF017AE5D71CE_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_372D94B0F906ED6C(::Class_3_B078ADE15E921143* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_B078ADE15E921143*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_372D94B0F906ED6C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A16B1E4DB1A3F093(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7_METHOD_3_A16B1E4DB1A3F093_OFFSET))(this, a1);
	}
};
