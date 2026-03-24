#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_2_84CEDCEF739506C1_2;
class Class_3_AA6DF3A878195D3F;
class Class_3_C0D5B1A036ED00F0;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5AA2BE468EDCE452_METHOD_1_582983B2E08B6BDE_1_OFFSET UNITYSDK_OFFSET(0x82C8D50)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_582983B2E08B6BDE_OFFSET UNITYSDK_OFFSET(0x82C8A20)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_8A45E12CA7258026_OFFSET UNITYSDK_OFFSET(0x82C8AA0)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_999B5DE00773D098_OFFSET UNITYSDK_OFFSET(0x82C8FB0)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x82C8DD0)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x82C8A10)
#define CLASS_1_5AA2BE468EDCE452_METHOD_1_F72D5D31CD7F0925_OFFSET UNITYSDK_OFFSET(0x82C8DE0)
#define CLASS_1_5AA2BE468EDCE452__CTOR_OFFSET UNITYSDK_OFFSET(0x82C88E0)

inline static constexpr unsigned int Class_1_5AA2BE468EDCE452_TypeDefinitionIndex = 71868;

class Class_1_5AA2BE468EDCE452 : public ::System::Object
{
public:
	::Class_3_F35B080B137ECC46* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_6; // 0x18
	::MoleMole::Battle::Entity* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::MoleMole::Config::CharacterSize Field_1_2; // 0x2C
	::System::Single Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_0; // 0x34

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Single Method_1_582983B2E08B6BDE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_582983B2E08B6BDE_OFFSET))(this, a1);
	}

	::System::Single Method_1_582983B2E08B6BDE_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_582983B2E08B6BDE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::MoleMole::Config::CharacterSize Method_1_8A45E12CA7258026(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Config::CharacterSize(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_8A45E12CA7258026_OFFSET))(this, a1);
	}

	::System::Single Method_1_F72D5D31CD7F0925(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_F72D5D31CD7F0925_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_999B5DE00773D098(::System::Single a1, ::Class_3_C0D5B1A036ED00F0* a2, ::Class_3_AA6DF3A878195D3F* a3, ::Class_2_84CEDCEF739506C1_2* a4)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Single, ::Class_3_C0D5B1A036ED00F0*, ::Class_3_AA6DF3A878195D3F*, ::Class_2_84CEDCEF739506C1_2*))((::PBYTE)hIl2Cpp + CLASS_1_5AA2BE468EDCE452_METHOD_1_999B5DE00773D098_OFFSET))(this, a1, a2, a3, a4);
	}
};
