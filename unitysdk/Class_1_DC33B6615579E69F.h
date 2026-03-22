#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigTurnback; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC33B6615579E69F_METHOD_1_3E4E9510B9875F1E_OFFSET UNITYSDK_OFFSET(0x9A84270)
#define CLASS_1_DC33B6615579E69F_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9A840C0)
#define CLASS_1_DC33B6615579E69F_METHOD_1_C3565E25B3BA8E0E_OFFSET UNITYSDK_OFFSET(0x9A841F0)
#define CLASS_1_DC33B6615579E69F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9A841E0)
#define CLASS_1_DC33B6615579E69F_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x9A84040)
#define CLASS_1_DC33B6615579E69F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A83EC0)

inline static constexpr unsigned int Class_1_DC33B6615579E69F_TypeDefinitionIndex = 59838;

class Class_1_DC33B6615579E69F : public ::System::Object
{
public:
	::MoleMole::Config::ConfigTurnback* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Int32 Field_1_2; // 0x2C
	::System::Boolean Field_1_3; // 0x30

	::System::Void _ctor(::MoleMole::Config::ConfigTurnback* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnback*))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_C3565E25B3BA8E0E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_C3565E25B3BA8E0E_OFFSET))(this, a1);
	}

	static ::Class_1_DC33B6615579E69F* Method_1_3E4E9510B9875F1E()
	{
		return ((::Class_1_DC33B6615579E69F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC33B6615579E69F_METHOD_1_3E4E9510B9875F1E_OFFSET))();
	}
};
