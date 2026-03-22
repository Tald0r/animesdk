#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraZooms; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_85A7C7D1D1F4E919__CTOR_OFFSET UNITYSDK_OFFSET(0x15F44520)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_85A7C7D1D1F4E919_TypeDefinitionIndex = 59271;

class Class_1_DEBC388222B8D99B_Class_1_85A7C7D1D1F4E919 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_85A7C7D1D1F4E919__CTOR_OFFSET))(this);
	}
};
