#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/SecurityPermissionFlag.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET UNITYSDK_OFFSET(0x19895E70)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x19895C90)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x198960A0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x19895CE0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19895EE0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x19896010)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x19895C80)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x19895BE0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x198962A0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x19895EF0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19895BD0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19895BA0)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityPermission_TypeDefinitionIndex = 960;

	class SecurityPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Security::Permissions::SecurityPermissionFlag flags; // 0x10

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Security::Permissions::SecurityPermissionFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_1_OFFSET))(this, flag);
		}

		::System::Void set_Flags(::System::Security::Permissions::SecurityPermissionFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_COPY_OFFSET))(this);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_UNION_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Void FromXml(::System::Security::SecurityElement* esd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_FROMXML_OFFSET))(this, esd);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET))(this);
		}

		::System::Security::Permissions::SecurityPermission* Cast(::System::Security::IPermission* target)
		{
			return ((::System::Security::Permissions::SecurityPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET))(this, target);
		}
	};
}
