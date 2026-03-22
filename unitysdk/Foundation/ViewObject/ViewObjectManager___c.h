#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class ViewObject; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0375E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA037620)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__112_0_OFFSET UNITYSDK_OFFSET(0xA037630)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__113_0_OFFSET UNITYSDK_OFFSET(0xA0376F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__161_0_OFFSET UNITYSDK_OFFSET(0xA0377B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__161_1_OFFSET UNITYSDK_OFFSET(0xA037830)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c_TypeDefinitionIndex = 49682;

	class ViewObjectManager___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__113_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x40B30);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__112_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x40B38);
		}
		static ::Foundation::ViewObject::ViewObjectManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectManager___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x40B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoReloadAllGroup_b__112_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__112_0_OFFSET))(this);
		}

		::System::Boolean _DoReloadGroupSuite_b__113_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__113_0_OFFSET))(this);
		}

		::System::Void __cctor_b__161_0(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__161_0_OFFSET))(this, value, handle);
		}

		::System::Void __cctor_b__161_1(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__161_1_OFFSET))(this, value, handle);
		}
	};
}
