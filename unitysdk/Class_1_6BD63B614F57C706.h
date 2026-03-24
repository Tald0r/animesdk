#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NodeMap; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6BD63B614F57C706_METHOD_1_B84BC20170CFFC1F_OFFSET UNITYSDK_OFFSET(0x9FD8870)
#define CLASS_1_6BD63B614F57C706_METHOD_1_FB9771C3C0CFED76_OFFSET UNITYSDK_OFFSET(0x9FD83E0)

inline static constexpr unsigned int Class_1_6BD63B614F57C706_TypeDefinitionIndex = 52477;

class Class_1_6BD63B614F57C706 : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*> Method_1_FB9771C3C0CFED76(::MoleMole::NodeMap* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*& a3)
	{
		return ((::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*>(*)(::MoleMole::NodeMap*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*&))((::PBYTE)hIl2Cpp + CLASS_1_6BD63B614F57C706_METHOD_1_FB9771C3C0CFED76_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B84BC20170CFFC1F(::MoleMole::NodeMap* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::NodeMap*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BD63B614F57C706_METHOD_1_B84BC20170CFFC1F_OFFSET))(a1, a2, a3);
	}
};
