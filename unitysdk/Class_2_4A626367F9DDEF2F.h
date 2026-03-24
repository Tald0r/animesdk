#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_3_883FBE6CFFAC5DA2;
class Class_3_AA6DF3A878195D3F;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4A626367F9DDEF2F_METHOD_2_1303509BE79BD84F_OFFSET UNITYSDK_OFFSET(0x9DFE450)
#define CLASS_2_4A626367F9DDEF2F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9DFE660)
#define CLASS_2_4A626367F9DDEF2F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9DFD860)
#define CLASS_2_4A626367F9DDEF2F_METHOD_2_B130B6ECCC588C21_OFFSET UNITYSDK_OFFSET(0x9DFD8C0)
#define CLASS_2_4A626367F9DDEF2F__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFD620)

inline static constexpr unsigned int Class_2_4A626367F9DDEF2F_TypeDefinitionIndex = 63217;

class Class_2_4A626367F9DDEF2F : public ::Class_1_5AA2BE468EDCE452
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::Class_3_883FBE6CFFAC5DA2*>* Field_2_1; // 0x48
	::Class_3_883FBE6CFFAC5DA2* Field_2_4; // 0x50
	::Class_3_F35B080B137ECC46* Field_2_5; // 0x58
	::Class_3_AA6DF3A878195D3F* Field_2_3; // 0x60
	::System::Single Field_2_0; // 0x68

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A626367F9DDEF2F__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A626367F9DDEF2F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_B130B6ECCC588C21(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_4A626367F9DDEF2F_METHOD_2_B130B6ECCC588C21_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A626367F9DDEF2F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_1303509BE79BD84F(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A626367F9DDEF2F_METHOD_2_1303509BE79BD84F_OFFSET))(this, a1);
	}
};
