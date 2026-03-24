#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_933381161574F1B9_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x19E048E0)
#define CLASS_1_933381161574F1B9_METHOD_1_DB2EC1E6D3C2BCE1_OFFSET UNITYSDK_OFFSET(0x19E1BCF0)

inline static constexpr unsigned int Class_1_933381161574F1B9_TypeDefinitionIndex = 32464;

class Class_1_933381161574F1B9 : public ::System::Object
{
public:
	static ::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_933381161574F1B9_METHOD_1_256B6E165124982E_OFFSET))(a1);
	}

	static ::System::Void Method_1_DB2EC1E6D3C2BCE1(::System::Action* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_933381161574F1B9_METHOD_1_DB2EC1E6D3C2BCE1_OFFSET))(a1, a2);
	}
};
