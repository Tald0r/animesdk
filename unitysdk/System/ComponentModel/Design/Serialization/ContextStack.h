#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class ArrayList; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_APPEND_OFFSET UNITYSDK_OFFSET(0x18D66EE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18D66CE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18D66E00)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18D66D40)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_POP_OFFSET UNITYSDK_OFFSET(0x18D66FB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x18D67040)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18D67100)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int ContextStack_TypeDefinitionIndex = 3099;

	class ContextStack : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* contextStack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK__CTOR_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 level)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_ITEM_OFFSET))(this, level);
		}

		::System::Object* get_Item_1(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_GET_ITEM_1_OFFSET))(this, type);
		}

		::System::Void Append(::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_APPEND_OFFSET))(this, context);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_POP_OFFSET))(this);
		}

		::System::Void Push(::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_CONTEXTSTACK_PUSH_OFFSET))(this, context);
		}
	};
}
